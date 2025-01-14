#include "matchingcommand.h"

MatchingCommand::MatchingCommand(const int argc, char **argv) : CommandParser(argc, argv) {
    // Initialize options value
    options_key[OptionKeyword::Algorithm] = "-a";
    options_key[OptionKeyword::IndexType] = "-i";
    options_key[OptionKeyword::QueryGraphFolder] = "-q";
    options_key[OptionKeyword::DataGraphFile] = "-d";
    options_key[OptionKeyword::ThreadCount] = "-n";
    options_key[OptionKeyword::DepthThreshold] = "-d0";
    options_key[OptionKeyword::WidthThreshold] = "-w0";
    options_key[OptionKeyword::Filter] = "-filter";
    options_key[OptionKeyword::Order] = "-order";
    options_key[OptionKeyword::ExportPlanPath] = "-export";
    options_key[OptionKeyword::MaxOutputEmbeddingNum] = "-num";
    options_key[OptionKeyword::SpectrumAnalysisTimeLimit] = "-time_limit";
    options_key[OptionKeyword::SpectrumAnalysisOrderNum] = "-order_num";
    options_key[OptionKeyword::DistributionFilePath] = "-dis_file";
    options_key[OptionKeyword::CRQ] = "-crq";
    options_key[OptionKeyword::DRQ] = "-drq";
    options_key[OptionKeyword::QList] = "-ql";
    options_key[OptionKeyword::EnablePreprocessor] = "-preprocess";
    options_key[OptionKeyword::OutputPath] = "-output_path";
    options_key[OptionKeyword::topK] = "-k";
    processOptions();
};

void MatchingCommand::processOptions() {
    // Query graph file path
    options_value[OptionKeyword::QueryGraphFolder] = getCommandOption(options_key[OptionKeyword::QueryGraphFolder]);

    // Data graph file path
    options_value[OptionKeyword::DataGraphFile] = getCommandOption(options_key[OptionKeyword::DataGraphFile]);

    // Algorithm
    options_value[OptionKeyword::Algorithm] = getCommandOption(options_key[OptionKeyword::Algorithm]);

    // Thread count
    options_value[OptionKeyword::ThreadCount] = getCommandOption(options_key[OptionKeyword::ThreadCount]);

    // Depth threshold
    options_value[OptionKeyword::DepthThreshold] = getCommandOption(options_key[OptionKeyword::DepthThreshold]);

    // Width threshold
    options_value[OptionKeyword::WidthThreshold] = getCommandOption(options_key[OptionKeyword::WidthThreshold]);

    // Index Type
    options_value[OptionKeyword::IndexType] = getCommandOption(options_key[OptionKeyword::IndexType]);

    // Filter Type
    options_value[OptionKeyword::Filter] = getCommandOption(options_key[OptionKeyword::Filter]);

    // Order Type
    options_value[OptionKeyword::Order] = getCommandOption(options_key[OptionKeyword::Order]);

    // Output path of the query plan
    options_value[OptionKeyword::ExportPlanPath] = getCommandOption(options_key[OptionKeyword::ExportPlanPath]);

    // Maximum output embedding num.
    options_value[OptionKeyword::MaxOutputEmbeddingNum] = getCommandOption(options_key[OptionKeyword::MaxOutputEmbeddingNum]);

    // Time Limit
    options_value[OptionKeyword::SpectrumAnalysisTimeLimit] = getCommandOption(options_key[OptionKeyword::SpectrumAnalysisTimeLimit]);

    // Order Num
    options_value[OptionKeyword::SpectrumAnalysisOrderNum] = getCommandOption(options_key[OptionKeyword::SpectrumAnalysisOrderNum]);

    // Distribution File Path
    options_value[OptionKeyword::DistributionFilePath] = getCommandOption(options_key[OptionKeyword::DistributionFilePath]);

    // CSR file path
    options_value[OptionKeyword::CRQ] = getCommandOption(options_key[OptionKeyword::CRQ]);

    // Output path of the query plan
    options_value[OptionKeyword::DRQ] = getCommandOption(options_key[OptionKeyword::DRQ]);

    // Manual input order.
    options_value[OptionKeyword::QList] = getCommandOption(options_key[OptionKeyword::QList]);

    // Enable preprocessor.
    options_value[OptionKeyword::EnablePreprocessor] = getCommandOption(options_key[OptionKeyword::EnablePreprocessor]);

    // Enable output path.
    options_value[OptionKeyword::OutputPath] = getCommandOption(options_key[OptionKeyword::OutputPath]);

    //top-k parameter.
    options_value[OptionKeyword::topK] = getCommandOption(options_key[OptionKeyword::topK]);
}